/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <Memories/SFUDataRepresentation.h>

@class TSPDatabase;

@interface TSPDatabaseDataRepresentation : SFUDataRepresentation {

	TSPDatabase* _database;
	long long _identifier;

}
-(id)initWithDatabase:(id)arg1 identifier:(long long)arg2 ;
-(sqlite3_blobRef)_openBlob;
-(ZeroCopyInputStream*)createProtobufInputStream;
-(long long)dataLength;
-(id)inputStream;
-(BOOL)hasSameLocationAs:(id)arg1 ;
@end

