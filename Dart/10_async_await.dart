import 'dart:io';

Future<int> _loadFromDisk() {}

Future<String> _fetchNetworkData(int id) {}

class ProcessedData {
  final String data;
  ProcessedData(this.data);
}

Future<ProcessedData> createDataMethod1() async {
  try {
    final id = await _loadFromDisk();
    final data = await _fetchNetworkData(id);
    return ProcessedData(data);
  } on HttpException catch (err) {
    print('Network error: $err');
    return ProcessedData('empty');
  } finally {
    print('All done!');
  }
}

// same as

Future<ProcessedData> createDataMethod2() async {
  return _loadFromDisk().then((id) {
    return _fetchNetworkData(id);
  }).then((data) {
    return ProcessedData(data);
  }).catchError(
    (err) {
      print('Network error: $err');
      return ProcessedData('empty');
    },
    test: (err) => err is HttpException,
  ).whenComplete(() {
    print('All done!');
  });
}

// async await in for loop

Future<int> getTotal(Stream<int> numbers) async {
  int total = 0;
  await for (final value in numbers) {
    total += value;
  }
  return total;
}
