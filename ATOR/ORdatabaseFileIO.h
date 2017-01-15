/*******************************************************************************
 * 
 * This file is part of BAIPROJECT.
 * 
 * BAIPROJECT is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License version 3
 * only, as published by the Free Software Foundation.
 * 
 * BAIPROJECT is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License version 3 for more details
 * (a copy is included in the LICENSE file that accompanied this code).
 * 
 * You should have received a copy of the GNU Affero General Public License
 * version 3 along with BAIPROJECT.  If not, see <http://www.gnu.org/licenses/>
 * for a copy of the AGPLv3 License.
 * 
 *******************************************************************************/

/*******************************************************************************
 *
 * File Name: ORdatabaseFileIO.h
 * Author: Richard Bruce Baxter - Copyright (c) 2005-2012 Baxter AI (baxterai.com)
 * Project: ATOR (Axis Transformation Object Recognition) Functions
 * Project Version: 3a12a 31-July-2012
 *
 *******************************************************************************/



#ifndef HEADER_OR_DATABASE_FILEIO
#define HEADER_OR_DATABASE_FILEIO

#include "ORglobalDefs.h"
#include "SHAREDvars.h"
#include "ORpolygonList.h"
	#include <stdio.h>
	#include <stdlib.h>
	#include <string>
	#include <iostream>
	#include <fstream>
	#include <time.h>
	#include <math.h>
	using namespace std;


#ifdef OR_METHOD_GEOMETRIC_COMPARISON
	bool compareFeaturesListForMatch(Feature * testfirstFeatureInNearestFeatureList, Feature * trainfirstFeatureInNearestFeatureList, int dimension, bool * exactMatchFound);
	void addFeatureToEndOfFeatureList(Feature * firstFeatureInList, Feature * featureToAdd);
	void createTransformedFeaturesFile(Feature * firstFeatureInList, string fileName, string objectName, int viewIndex, int zoomIndex, int polyIndex, int sideIndex, int trainOrTest);
	void createFeaturesListUsingFeaturesFile(string fileName, Feature * firstFeatureInList, bool createFeatureObjects, bool appendToList, bool ignoreOTfeatures);
#endif

#endif




