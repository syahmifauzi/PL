import 'dart:async';

class NumberCreator {
  int _count = 1;
  final _controller = StreamController<int>();

  NumberCreator() {
    Timer.periodic(Duration(seconds: 1), (t) {
      _controller.sink.add(_count);
      _count++;
    });
  }

  Stream<int> get stream => _controller.stream;
}

void main() {

  final myStream = NumberCreator().stream
    .where((i) => i % 2 == 0)
    .map((i) => 'String $i');

  final subscription = myStream.listen(
    (data) {
      print('Data: $data');
    },
    onError: (err) {
      print('Error!');
    },
    cancelOnError: false,
    onDone: () {
      print('Done!');
    }
  );

  subscription.pause();
  subscription.resume();

}
