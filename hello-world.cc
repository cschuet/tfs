#include "bigtable/client/table.h"

int main(int argc, char* argv[]) {
  auto client = bigtable::CreateDefaultDataClient(
		  "my-project", "my-instance",
		  bigtable::ClientOptions());
  bigtable::Table table(client, "my-table");
}

