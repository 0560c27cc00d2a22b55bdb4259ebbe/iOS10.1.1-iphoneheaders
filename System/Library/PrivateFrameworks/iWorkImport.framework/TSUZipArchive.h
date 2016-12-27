/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface TSUZipArchive : NSObject {

	NSMutableDictionary* _entries;

}

@property (nonatomic,readonly) unsigned long long archiveLength; 
@property (nonatomic,readonly) id<TSUReadChannel> readChannel; 
-(unsigned long long)archiveLength;
-(id<TSUReadChannel>)readChannel;
-(void)readEndOfCentralDirectoryData:(id)arg1 channel:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)readCentralDirectoryWithEntryCount:(unsigned long long)arg1 offset:(long long)arg2 size:(long long)arg3 channel:(id)arg4 queue:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)readCentralDirectoryData:(id)arg1 entryCount:(unsigned long long)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)readCentralFileHeaderWithBuffer:(const void*)arg1 dataSize:(unsigned long long*)arg2 ;
-(void)readArchiveWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)readChannelForEntry:(id)arg1 ;
-(id)entryForName:(id)arg1 ;
-(id)init;
-(id)debugDescription;
-(void)addEntry:(id)arg1 ;
-(void)enumerateEntriesUsingBlock:(/*^block*/id)arg1 ;
@end

