/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OSLogPersistenceDelegate;
#import <LoggingSupport/LoggingSupport-Structs.h>
@class NSObject, NSString, NSURL, NSCompoundPredicate, NSDate;

@interface OSLogPersistence : NSObject {

	oslog_persistence_file_tq* _files;
	rb_tree* _oversize_rbt;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _sourcePath;
	event_indices_tq* _event_indices;
	BOOL _verbose;
	NSURL* _logFile;
	NSURL* _logArchive;
	id<OSLogPersistenceDelegate> _delegate;
	NSCompoundPredicate* _predicate;
	unsigned long long _batchSize;
	unsigned long long _options;
	NSString* _currentFile;
	NSDate* _startDate;
	NSDate* _sparseDataStart;
	NSDate* _endDate;
	unsigned long long _decodeFailures;
	unsigned long long _messagesFiltered;
	unsigned long long _logMessageCount;

}

@property (nonatomic,copy) NSURL * logFile;                            //@synthesize logFile=_logFile - In the implementation block
@property (nonatomic,copy) NSURL * logArchive;                         //@synthesize logArchive=_logArchive - In the implementation block
@property (__weak) id<OSLogPersistenceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (copy) NSCompoundPredicate * predicate;                      //@synthesize predicate=_predicate - In the implementation block
@property (assign) unsigned long long batchSize;                       //@synthesize batchSize=_batchSize - In the implementation block
@property (assign) unsigned long long options;                         //@synthesize options=_options - In the implementation block
@property (copy,readonly) NSString * currentFile;                      //@synthesize currentFile=_currentFile - In the implementation block
@property (copy,readonly) NSDate * startDate;                          //@synthesize startDate=_startDate - In the implementation block
@property (copy,readonly) NSDate * sparseDataStart;                    //@synthesize sparseDataStart=_sparseDataStart - In the implementation block
@property (copy,readonly) NSDate * endDate;                            //@synthesize endDate=_endDate - In the implementation block
@property (readonly) unsigned long long decodeFailures;                //@synthesize decodeFailures=_decodeFailures - In the implementation block
@property (readonly) unsigned long long messagesFiltered;              //@synthesize messagesFiltered=_messagesFiltered - In the implementation block
@property (readonly) unsigned long long logMessageCount;               //@synthesize logMessageCount=_logMessageCount - In the implementation block
@property (assign) BOOL verbose;                                       //@synthesize verbose=_verbose - In the implementation block
+(id)logPersistenceAtPath:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<OSLogPersistenceDelegate>)arg1 ;
-(void)dealloc;
-(id<OSLogPersistenceDelegate>)delegate;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)setPredicate:(NSCompoundPredicate *)arg1 ;
-(NSCompoundPredicate *)predicate;
-(BOOL)verbose;
-(void)setVerbose:(BOOL)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(unsigned long long)batchSize;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(id)statistics;
-(oslog_persistence_file*)createFileFromRegion:(void*)arg1 size:(unsigned long long)arg2 liveData:(BOOL)arg3 path:(char*)arg4 ;
-(void)_reportError:(int)arg1 format:(id)arg2 ;
-(oslog_persistence_header*)createHeaderForChunk:(tracev3_chunk_s*)arg1 andFile:(oslog_persistence_file*)arg2 ;
-(oslog_persistence_chunk*)createChunk:(tracev3_chunk_s*)arg1 header:(tracev3_chunk_s*)arg2 ;
-(void)parseFileMetadata:(oslog_persistence_file*)arg1 ;
-(oslog_persistence_file*)createFileFromDescriptor:(int)arg1 ;
-(void)openPath:(id)arg1 ;
-(void)openLogArchive;
-(void)clearOversizeRBT;
-(void)closeFiles;
-(void)openFiles;
-(void)allocateEventListForHeader:(oslog_persistence_header*)arg1 ;
-(void)growEventListForHeader:(oslog_persistence_header*)arg1 ;
-(void)addChunk:(oslog_persistence_chunk*)arg1 toHeader:(oslog_persistence_header*)arg2 ;
-(void)addOversizeChunk:(oslog_persistence_chunk*)arg1 ;
-(void)buildIndexFromTimeInterval:(double)arg1 toTimeInterval:(double)arg2 ;
-(void)enumerateWithIndex:(oslog_persistence_index*)arg1 start:(double)arg2 end:(double)arg3 withBlock:(/*^block*/id)arg4 ;
-(BOOL)allowSensitive;
-(void)_enumerateFromStartDate:(id)arg1 toEndDate:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)resetWorkingState;
-(void)setLogFile:(NSURL *)arg1 ;
-(void)setLogArchive:(NSURL *)arg1 ;
-(void)enumerateFromLastBootWithBlock:(/*^block*/id)arg1 ;
-(void)fetchFromStartDate:(id)arg1 toEndDate:(id)arg2 ;
-(void)enumerateFromStartDate:(id)arg1 toEndDate:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(NSURL *)logFile;
-(NSURL *)logArchive;
-(NSString *)currentFile;
-(NSDate *)sparseDataStart;
-(unsigned long long)decodeFailures;
-(unsigned long long)messagesFiltered;
-(unsigned long long)logMessageCount;
@end

