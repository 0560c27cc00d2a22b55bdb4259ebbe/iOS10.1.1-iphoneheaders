/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSFileHandle, ASTrafficLogger;

@interface ASParseContext : NSObject {

	BOOL _moreDataExpected;
	BOOL _keepPreviousData;
	BOOL _lastLookedAtBufferHadStringEndPrefix;
	int _streamingState;
	int _codePage;
	int _dataGeneration;
	unsigned _lastFoundBufferWithoutLineEnding;
	unsigned _numTokensInBuffersWithoutLineEndings;
	long long _curOffset;
	NSString* _parseErrorReason;
	long long _expectedTotalBytesCount;
	long long _currentBytesReceivedCount;
	NSMutableArray* _dataBuffers;
	unsigned long long _offsetIntoFirstData;
	NSMutableArray* _bypassedDataBuffers;
	NSFileHandle* _logFileHandle;
	NSString* _logFilePath;
	ASTrafficLogger* _trafficLogger;

}

@property (assign,nonatomic) long long curOffset;                                        //@synthesize curOffset=_curOffset - In the implementation block
@property (assign,nonatomic) long long currentBytesReceivedCount;                        //@synthesize currentBytesReceivedCount=_currentBytesReceivedCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * dataBuffers;                               //@synthesize dataBuffers=_dataBuffers - In the implementation block
@property (assign,nonatomic) unsigned long long offsetIntoFirstData;                     //@synthesize offsetIntoFirstData=_offsetIntoFirstData - In the implementation block
@property (assign,nonatomic) unsigned lastFoundBufferWithoutLineEnding;                  //@synthesize lastFoundBufferWithoutLineEnding=_lastFoundBufferWithoutLineEnding - In the implementation block
@property (assign,nonatomic) unsigned numTokensInBuffersWithoutLineEndings;              //@synthesize numTokensInBuffersWithoutLineEndings=_numTokensInBuffersWithoutLineEndings - In the implementation block
@property (assign,nonatomic) BOOL lastLookedAtBufferHadStringEndPrefix;                  //@synthesize lastLookedAtBufferHadStringEndPrefix=_lastLookedAtBufferHadStringEndPrefix - In the implementation block
@property (nonatomic,retain) NSMutableArray * bypassedDataBuffers;                       //@synthesize bypassedDataBuffers=_bypassedDataBuffers - In the implementation block
@property (nonatomic,retain) NSFileHandle * logFileHandle;                               //@synthesize logFileHandle=_logFileHandle - In the implementation block
@property (nonatomic,retain) NSString * logFilePath;                                     //@synthesize logFilePath=_logFilePath - In the implementation block
@property (nonatomic,retain) ASTrafficLogger * trafficLogger;                            //@synthesize trafficLogger=_trafficLogger - In the implementation block
@property (assign,nonatomic) int streamingState;                                         //@synthesize streamingState=_streamingState - In the implementation block
@property (assign,nonatomic) int codePage;                                               //@synthesize codePage=_codePage - In the implementation block
@property (nonatomic,retain) NSString * parseErrorReason;                                //@synthesize parseErrorReason=_parseErrorReason - In the implementation block
@property (assign,nonatomic) BOOL moreDataExpected;                                      //@synthesize moreDataExpected=_moreDataExpected - In the implementation block
@property (assign,nonatomic) int dataGeneration;                                         //@synthesize dataGeneration=_dataGeneration - In the implementation block
@property (assign,nonatomic) long long expectedTotalBytesCount;                          //@synthesize expectedTotalBytesCount=_expectedTotalBytesCount - In the implementation block
@property (assign,nonatomic) BOOL keepPreviousData;                                      //@synthesize keepPreviousData=_keepPreviousData - In the implementation block
-(id)init;
-(void)dealloc;
-(void)flushLogs;
-(void)addData:(id)arg1 ;
-(NSString *)logFilePath;
-(unsigned char)currentByte;
-(BOOL)advanceOffsetByAmount:(unsigned)arg1 ;
-(long long)curOffset;
-(void)setParseErrorReason:(NSString *)arg1 ;
-(char*)bufferForLength:(unsigned)arg1 shouldFree:(BOOL*)arg2 ;
-(NSString *)parseErrorReason;
-(BOOL)hasNumberOfTokensRemaining:(unsigned)arg1 ;
-(void)setCodePage:(int)arg1 ;
-(int)codePage;
-(id)bufferWithAllData;
-(long long)goodSizeForBuffer;
-(BOOL)advanceOffsetByAmount:(unsigned)arg1 retainLastToken:(BOOL)arg2 ;
-(int)dataGeneration;
-(long long)currentBytesReceivedCount;
-(long long)expectedTotalBytesCount;
-(int)streamingState;
-(void)setStreamingState:(int)arg1 ;
-(unsigned char)nextByte;
-(int)numTokensStreamableForNextStringSizeOfTerminator:(int*)arg1 ;
-(int)numTokensForNextString;
-(int)numTokensForNextOpaqueData;
-(void)setKeepPreviousData:(BOOL)arg1 ;
-(ASTrafficLogger *)trafficLogger;
-(void)setTrafficLogger:(ASTrafficLogger *)arg1 ;
-(void)invalidateBuffers;
-(NSMutableArray *)dataBuffers;
-(unsigned long long)offsetIntoFirstData;
-(unsigned)lastFoundBufferWithoutLineEnding;
-(void)setLastFoundBufferWithoutLineEnding:(unsigned)arg1 ;
-(void)setNumTokensInBuffersWithoutLineEndings:(unsigned)arg1 ;
-(void)setLastLookedAtBufferHadStringEndPrefix:(BOOL)arg1 ;
-(BOOL)lastLookedAtBufferHadStringEndPrefix;
-(unsigned)numTokensInBuffersWithoutLineEndings;
-(void)setOffsetIntoFirstData:(unsigned long long)arg1 ;
-(BOOL)keepPreviousData;
-(NSMutableArray *)bypassedDataBuffers;
-(void)setBypassedDataBuffers:(NSMutableArray *)arg1 ;
-(void)setCurOffset:(long long)arg1 ;
-(void)setDataBuffers:(NSMutableArray *)arg1 ;
-(void)setDataGeneration:(int)arg1 ;
-(void)setCurrentBytesReceivedCount:(long long)arg1 ;
-(NSFileHandle *)logFileHandle;
-(unsigned char)byteAtOffsetFromCurrentByte:(unsigned)arg1 ;
-(int)numberOfBytesUntilStringEnd:(char*)arg1 searchStringLength:(int)arg2 acceptingBufferBits:(BOOL)arg3 ;
-(int)_numTokensForNextOpaqueDataCheckNumTokens:(BOOL)arg1 ;
-(void)setShouldLog:(BOOL)arg1 ;
-(void)resetToZeroOffset;
-(BOOL)moreDataExpected;
-(void)setMoreDataExpected:(BOOL)arg1 ;
-(void)setExpectedTotalBytesCount:(long long)arg1 ;
-(void)setLogFileHandle:(NSFileHandle *)arg1 ;
-(void)setLogFilePath:(NSString *)arg1 ;
@end

