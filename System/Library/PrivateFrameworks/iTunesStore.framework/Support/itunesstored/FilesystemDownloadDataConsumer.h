/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <itunesstored/DownloadDataConsumer.h>

@class NSArray, NSString;

@interface FilesystemDownloadDataConsumer : DownloadDataConsumer {

	long long _bytesWritten;
	int _fd;
	BOOL _hasConsumedData;
	NSArray* _hashes;
	CC_MD5state_st _md5Context;
	long long _numberOfBytesToHash;
	NSString* _path;
	unsigned long long _resumptionOffset;
	long long _verifiedBytes;

}
-(unsigned long long)resumptionOffset;
-(BOOL)consumeData:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasConsumedData;
-(BOOL)_hashAndWriteData:(id)arg1 error:(id*)arg2 ;
-(id)initWithPath:(id)arg1 MD5Hashes:(id)arg2 numberOfBytesToHash:(long long)arg3 ;
-(void)truncate;
-(unsigned long long)diskUsage;
-(void)dealloc;
-(void)reset;
-(void)suspend;
-(BOOL)_openFile;
-(void)_truncateToSize:(long long)arg1 ;
-(BOOL)_checkHashForByteCount:(long long)arg1 ;
-(BOOL)finish:(id*)arg1 ;
@end

