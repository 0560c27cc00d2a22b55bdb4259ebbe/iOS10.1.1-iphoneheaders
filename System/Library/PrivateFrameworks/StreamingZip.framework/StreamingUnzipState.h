/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StreamingZip.framework/StreamingZip
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StreamingZip/StreamingZip-Structs.h>
@class NSString, NSArray, NSDictionary, NSMutableData;

@interface StreamingUnzipState : NSObject {

	SCD_Struct_St0* _cmpState;
	unsigned long long _lastResumptionSavedOffset;
	unsigned long long _hashedChunkSize;
	unsigned long long _bytesHashedInChunk;
	unsigned long long _uncompressedBytesOutput;
	unsigned long long _totalFileSizeWritten;
	NSString* _unzipPath;
	NSArray* _hashes;
	unsigned long long _currentLFRecordAllocationSize;
	SCD_Struct_St7 _hashContext;
	NSDictionary* _streamInfoDict;
	NSString* _lastChunkPartialHash;
	NSMutableData* _unsureData;
	NSMutableData* _inMemoryFileData;
	SCD_Struct_St11* _currentLFRecord;
	SCD_Struct_St15* _dataDescriptor;
	unsigned long long _thisStageBytesComplete;
	unsigned long long _currentOffset;
	unsigned long long _recordsProcessed;
	unsigned long long _totalRecordCount;
	unsigned long long _totalUncompressedBytes;
	unsigned long long _currentCRC32;
	int _currentOutputFD;
	unsigned short _currentLFMode;
	unsigned char _streamState;
	BOOL _storeCurrentFileInMemory;
	BOOL _currentLFRequiresDataDescriptor;
	BOOL _denyInvalidSymlinks;

}

@property (nonatomic,readonly) SCD_Struct_St0* cmpState; 
@property (nonatomic,readonly) NSString * unzipPath;                                        //@synthesize unzipPath=_unzipPath - In the implementation block
@property (nonatomic,readonly) SCD_Struct_St16 hashContext;                                 //@synthesize hashContext=_hashContext - In the implementation block
@property (nonatomic,retain) NSDictionary * streamInfoDict;                                 //@synthesize streamInfoDict=_streamInfoDict - In the implementation block
@property (nonatomic,retain) NSString * lastChunkPartialHash;                               //@synthesize lastChunkPartialHash=_lastChunkPartialHash - In the implementation block
@property (nonatomic,retain) NSMutableData * unsureData;                                    //@synthesize unsureData=_unsureData - In the implementation block
@property (nonatomic,retain) NSMutableData * inMemoryFileData;                              //@synthesize inMemoryFileData=_inMemoryFileData - In the implementation block
@property (assign,nonatomic) SCD_Struct_St11* currentLFRecord;                              //@synthesize currentLFRecord=_currentLFRecord - In the implementation block
@property (assign,nonatomic) unsigned long long currentLFRecordAllocationSize;              //@synthesize currentLFRecordAllocationSize=_currentLFRecordAllocationSize - In the implementation block
@property (assign,nonatomic) unsigned long long thisStageBytesComplete;                     //@synthesize thisStageBytesComplete=_thisStageBytesComplete - In the implementation block
@property (assign,nonatomic) unsigned long long currentOffset;                              //@synthesize currentOffset=_currentOffset - In the implementation block
@property (nonatomic,readonly) unsigned long long hashedChunkSize;                          //@synthesize hashedChunkSize=_hashedChunkSize - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesHashedInChunk;                       //@synthesize bytesHashedInChunk=_bytesHashedInChunk - In the implementation block
@property (assign,nonatomic) unsigned long long currentCRC32;                               //@synthesize currentCRC32=_currentCRC32 - In the implementation block
@property (assign,nonatomic) int currentOutputFD;                                           //@synthesize currentOutputFD=_currentOutputFD - In the implementation block
@property (assign,nonatomic) unsigned long long recordsProcessed;                           //@synthesize recordsProcessed=_recordsProcessed - In the implementation block
@property (assign,nonatomic) unsigned long long totalRecordCount;                           //@synthesize totalRecordCount=_totalRecordCount - In the implementation block
@property (assign,nonatomic) unsigned long long totalUncompressedBytes;                     //@synthesize totalUncompressedBytes=_totalUncompressedBytes - In the implementation block
@property (assign,nonatomic) unsigned long long uncompressedBytesOutput;                    //@synthesize uncompressedBytesOutput=_uncompressedBytesOutput - In the implementation block
@property (assign,nonatomic) unsigned long long totalFileSizeWritten;                       //@synthesize totalFileSizeWritten=_totalFileSizeWritten - In the implementation block
@property (assign,nonatomic) unsigned short currentLFMode;                                  //@synthesize currentLFMode=_currentLFMode - In the implementation block
@property (assign,nonatomic) unsigned char streamState;                                     //@synthesize streamState=_streamState - In the implementation block
@property (assign,nonatomic) BOOL storeCurrentFileInMemory;                                 //@synthesize storeCurrentFileInMemory=_storeCurrentFileInMemory - In the implementation block
@property (assign,nonatomic) BOOL currentLFRequiresDataDescriptor;                          //@synthesize currentLFRequiresDataDescriptor=_currentLFRequiresDataDescriptor - In the implementation block
@property (assign,nonatomic) SCD_Struct_St15* dataDescriptor;                               //@synthesize dataDescriptor=_dataDescriptor - In the implementation block
@property (assign,nonatomic) BOOL denyInvalidSymlinks;                                      //@synthesize denyInvalidSymlinks=_denyInvalidSymlinks - In the implementation block
+(id)unzipStateWithPath:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithPath:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)currentOffset;
-(void)markResumptionPoint;
-(id)_checkHashForOffset:(unsigned long long)arg1 ;
-(id)updateHashFromOffset:(unsigned long long)arg1 withBytes:(const void*)arg2 length:(unsigned long long)arg3 onlyFinishCurrentChunk:(BOOL)arg4 ;
-(void)clearSavedState;
-(SCD_Struct_St0*)cmpState;
-(void)_internalSetStreamState:(unsigned char)arg1 ;
-(void)setCurrentOutputFD:(int)arg1 ;
-(id)checkLastChunkPartialHash;
-(id)updateHashFromOffset:(unsigned long long)arg1 withBytes:(const void*)arg2 length:(unsigned long long)arg3 ;
-(id)finishStream;
-(NSString *)unzipPath;
-(SCD_Struct_St16)hashContext;
-(NSDictionary *)streamInfoDict;
-(void)setStreamInfoDict:(NSDictionary *)arg1 ;
-(NSString *)lastChunkPartialHash;
-(void)setLastChunkPartialHash:(NSString *)arg1 ;
-(NSMutableData *)unsureData;
-(void)setUnsureData:(NSMutableData *)arg1 ;
-(NSMutableData *)inMemoryFileData;
-(void)setInMemoryFileData:(NSMutableData *)arg1 ;
-(SCD_Struct_St11*)currentLFRecord;
-(void)setCurrentLFRecord:(SCD_Struct_St11*)arg1 ;
-(unsigned long long)currentLFRecordAllocationSize;
-(void)setCurrentLFRecordAllocationSize:(unsigned long long)arg1 ;
-(unsigned long long)thisStageBytesComplete;
-(void)setThisStageBytesComplete:(unsigned long long)arg1 ;
-(unsigned long long)currentCRC32;
-(void)setCurrentCRC32:(unsigned long long)arg1 ;
-(int)currentOutputFD;
-(unsigned long long)recordsProcessed;
-(void)setRecordsProcessed:(unsigned long long)arg1 ;
-(unsigned long long)totalRecordCount;
-(void)setTotalRecordCount:(unsigned long long)arg1 ;
-(unsigned long long)totalUncompressedBytes;
-(void)setTotalUncompressedBytes:(unsigned long long)arg1 ;
-(unsigned short)currentLFMode;
-(void)setCurrentLFMode:(unsigned short)arg1 ;
-(BOOL)storeCurrentFileInMemory;
-(void)setStoreCurrentFileInMemory:(BOOL)arg1 ;
-(BOOL)currentLFRequiresDataDescriptor;
-(void)setCurrentLFRequiresDataDescriptor:(BOOL)arg1 ;
-(unsigned long long)bytesHashedInChunk;
-(unsigned long long)hashedChunkSize;
-(unsigned long long)uncompressedBytesOutput;
-(void)setUncompressedBytesOutput:(unsigned long long)arg1 ;
-(unsigned long long)totalFileSizeWritten;
-(void)setTotalFileSizeWritten:(unsigned long long)arg1 ;
-(SCD_Struct_St15*)dataDescriptor;
-(void)setDataDescriptor:(SCD_Struct_St15*)arg1 ;
-(BOOL)denyInvalidSymlinks;
-(void)setDenyInvalidSymlinks:(BOOL)arg1 ;
-(void)setCurrentOffset:(unsigned long long)arg1 ;
-(id)serializeState;
-(unsigned char)streamState;
-(void)setStreamState:(unsigned char)arg1 ;
@end

