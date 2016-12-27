/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SymptomDiagnosticManagement.framework/SymptomDiagnosticManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SymptomDiagnosticManagement/SymptomDiagnosticManagement-Structs.h>
@interface DiagnosticExtensionCacheDelete : NSObject
+(id)sharedInstance;
+(void)registerCallbacks:(const char*)arg1 ;
+(void)purgePayloadsForAllCases;
-(void)registerCallbacks:(const char*)arg1 ;
-(id)replyCacheDeleteDictionaryWithVolume:(id)arg1 amount:(unsigned long long)arg2 ;
-(id)cacheDeletePurgeableWithUrgency:(int)arg1 info:(CFDictionaryRef)arg2 ;
-(id)cacheDeletePurgeWithUrgency:(int)arg1 info:(CFDictionaryRef)arg2 ;
-(id)cacheDeletePeriodicWithInfo:(CFDictionaryRef)arg1 ;
-(unsigned long long)purgeOrphanedPayloadsCalculateOnly:(BOOL)arg1 ;
-(void)purgePayloadsForCases:(id)arg1 payloadRecords:(id)arg2 ;
-(id)_purgeable:(id)arg1 payloadRecords:(id)arg2 urgency:(int)arg3 amount:(unsigned long long*)arg4 justLRU:(BOOL)arg5 ;
-(void)purgePayloadsForAllCases;
@end

