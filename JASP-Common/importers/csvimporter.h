#ifndef CSVIMPORTER_H
#define CSVIMPORTER_H

#include "../dataset.h"

#include <boost/function.hpp>

#include <string>
#include <vector>

class CSVImporter
{
public:

	static DataSet *loadDataSet(const std::string &locator, boost::function<void (const std::string &, int)> progressCallback);

private:
	static void initColumn(Column &column, const std::string &name, const std::vector<std::string> &cells);
	static std::string deEuropeanise(const std::string &value);
};

#endif // CSVIMPORTER_H
