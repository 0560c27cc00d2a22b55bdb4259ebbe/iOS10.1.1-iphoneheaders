/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/ReportCrash
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReportCrash/ReportCrash-Structs.h>
#import <CrashReporterSupport/AppleErrorReport.h>
#import <ReportCrash/ConcreteReport.h>

@class NSString, NSMutableArray, NSDictionary, NSMutableDictionary, NSUUID, NSNumber;

@interface CrashReport : AppleErrorReport <ConcreteReport> {

	unsigned _task;
	timeval _proc_starttime;
	NSString* _procPath;
	int _cpuType;
	BOOL _is64Bit;
	NSMutableArray* _binaryImages;
	NSDictionary* _binaryImageHints;
	BOOL _binaryImagePostProcessingComplete;
	NSMutableArray* _backtraces;
	NSMutableArray* _threadNames;
	NSMutableArray* _applicationSpecificInfo;
	NSMutableArray* _dyldMessages;
	BOOL _execFailureError;
	int _maxBinaryIdentifierLength;
	NSMutableDictionary* _extraInfo;
	unsigned _procDirtyFlags;
	unsigned _cs_status;
	unsigned long long _uniqId;
	int _exceptionType;
	long long* _exceptionCode;
	unsigned _exceptionCodeCount;
	int _signal;
	unsigned _threadPort;
	unsigned _threadState[144];
	int _threadStateFlavor;
	unsigned _threadStateCount;
	unsigned long long _threadId;
	int _crashedThreadNumber;
	NSString* _parentProcessName;
	int _ppid;
	unsigned _uid;
	int _highlightedThreadNumber;
	NSString* _lastExceptionBacktrace;
	char _slice_uuid[37];
	NSUUID* _vendor_id;
	NSString* _bundle_id;
	NSString* _bundle_vers;
	NSString* _short_vers;
	NSString* _cohort_id;
	NSNumber* _adam_id;
	BOOL _is_first_party;
	BOOL _is_simulated;
	NSString* _hostname;
	int _task_role;
	unsigned long long _coalition_id;
	NSString* _coalition_name;
	int _responsible_pid;
	NSString* _memgraph_filename;
	NSMutableDictionary* _spewage_diag;
	unsigned long long _abort_cause;
	unsigned _exit_snapshot_length;
	exit_reason_snapshot* _exit_snapshot;
	unsigned _exit_payload_length;
	void* _exit_payload;
	NSString* _terminator_reason;
	NSString* _terminator_proc;
	int _terminator_pid;
	BOOL _is_beta;
	int _proc_id;
	NSString* _procName;

}

@property (nonatomic,readonly) int proc_id;                         //@synthesize proc_id=_proc_id - In the implementation block
@property (nonatomic,readonly) NSString * procName;                 //@synthesize procName=_procName - In the implementation block
@property (nonatomic,readonly) BOOL is_beta;                        //@synthesize is_beta=_is_beta - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTask:(unsigned)arg1 exceptionType:(int)arg2 thread:(unsigned)arg3 threadStateFlavor:(int)arg4 threadState:(unsigned)arg5 threadStateCount:(unsigned)arg6 ;
-(void)setApplicationSpecificInformation:(const char*)arg1 ;
-(void)unpackExceptionCodes;
-(void)finishExtractionUsingCorpse:(BOOL)arg1 ;
-(void)_extractLastExceptionBacktraceUsingSymbolicator:(CSTypeRef)arg1 ;
-(void)_extractBinaryImageInfoUsingSymbolicator:(CSTypeRef)arg1 ;
-(void)_extractBacktraceInfoUsingSymbolicator:(CSTypeRef)arg1 usingCorpse:(BOOL)arg2 ;
-(void)captureDiagInfo:(id)arg1 ;
-(id)exceptionCodesDescriptionWithPrefix:(BOOL)arg1 ;
-(id)slice_uuid;
-(char*)_copyStringFromTask:(unsigned)arg1 atAddress:(unsigned long long)arg2 immutableOnly:(BOOL)arg3 ;
-(VMURange)_regionAtAddress:(unsigned long long)arg1 immutableOnly:(BOOL)arg2 ;
-(id)_readDataFromMemory:(mapped_memory_tRef)arg1 atAddress:(unsigned long long)arg2 size:(unsigned long long)arg3 ;
-(id)_readStringAtTaskAddress:(unsigned long long)arg1 immutableOnly:(BOOL)arg2 ;
-(void)_extractCrashReporterAnnotationsFromSymbolOwner:(CSTypeRef)arg1 withMemory:(mapped_memory_tRef)arg2 internal:(BOOL)arg3 ;
-(void)appendStack:(const merged_stack_frame*)arg1 toArray:(id)arg2 indent:(int)arg3 width:(int)arg4 ;
-(id)exceptionTypeDescription;
-(id)signalName;
-(void)decodeBacktraceWithBlock:(/*^block*/id)arg1 ;
-(id)_threadStateDescription;
-(void)_appendToArray:(id)arg1 binaryImageDict:(id)arg2 ;
-(id)initSimulated:(unsigned)arg1 withReason:(const char*)arg2 ;
-(void)inspectLivePid:(int)arg1 exceptionCodes:(long long*)arg2 count:(unsigned)arg3 ;
-(void)autopsyCorpse;
-(unsigned long long)_readAddressFromMemory:(mapped_memory_tRef)arg1 atSymbol:(CSTypeRef)arg2 ;
-(void)loadBundleInfo;
-(id)_descriptionForException:(id)arg1 ;
-(int)proc_id;
-(BOOL)is_beta;
-(id)overrideFileExtension;
-(id)reportNamePrefix;
-(id)additionalIPSMetadata;
-(int)streamContentAtLevel:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)appleCareDetails;
-(BOOL)secondChanceToSylog;
-(void)generateLogAtLevel:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)generateCustomLogAtLevel:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)problemType;
-(void)setHost:(id)arg1 ;
-(NSString *)procName;
-(BOOL)isActionable;
-(id)binaryImages;
-(id)_cpuTypeDescription;
-(id)binaryImageDictionaryForAddress:(unsigned long long)arg1 ;
@end

