# Eventarc API C++ Client Library

This directory contains an idiomatic C++ client library for the
[Eventarc API][cloud-service-docs], a service to asynchronously deliver events.

While this library is **GA**, please note that the Google Cloud C++ client libraries do **not** follow
[Semantic Versioning](https://semver.org/).

## Quickstart

The [quickstart/](quickstart/README.md) directory contains a minimal environment
to get started using this client library in a larger project. The following
"Hello World" program is used in this quickstart, and should give you a taste of
this library.

For detailed instructions on how to build and install this library, see the
top-level [README](/README.md#building-and-installing).

<!-- inject-quickstart-start -->

```cc
#include "google/cloud/eventarc/v1/eventarc_client.h"
#include "google/cloud/project.h"
#include <iostream>

int main(int argc, char* argv[]) try {
  if (argc != 3) {
    std::cerr << "Usage: " << argv[0] << " project-id location-id\n";
    return 1;
  }

  namespace eventarc = ::google::cloud::eventarc_v1;
  auto client = eventarc::EventarcClient(eventarc::MakeEventarcConnection());

  auto const project = google::cloud::Project(argv[1]);
  auto const parent = project.FullName() + "/locations/" + argv[2];
  for (auto t : client.ListTriggers(parent)) {
    if (!t) throw std::move(t).status();
    std::cout << t->DebugString() << "\n";
  }

  return 0;
} catch (google::cloud::Status const& status) {
  std::cerr << "google::cloud::Status thrown: " << status << "\n";
  return 1;
}
```

<!-- inject-quickstart-end -->

## More Information

- Official documentation about the [Eventarc API][cloud-service-docs] service
- [Reference doxygen documentation][doxygen-link] for each release of this
  client library
- Detailed header comments in our [public `.h`][source-link] files

[cloud-service-docs]: https://cloud.google.com/eventarc
[doxygen-link]: https://googleapis.dev/cpp/google-cloud-eventarc/latest/
[source-link]: https://github.com/googleapis/google-cloud-cpp/tree/main/google/cloud/eventarc
