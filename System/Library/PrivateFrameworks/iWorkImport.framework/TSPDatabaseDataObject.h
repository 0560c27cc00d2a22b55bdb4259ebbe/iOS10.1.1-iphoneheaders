/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>

@class TSPData;

@interface TSPDatabaseDataObject : TSPObject {

	TSPData* _data;

}

@property (nonatomic,readonly) TSPData * data;              //@synthesize data=_data - In the implementation block
-(id)initFromUnarchiver:(id)arg1 ;
-(TSPData *)data;
@end

