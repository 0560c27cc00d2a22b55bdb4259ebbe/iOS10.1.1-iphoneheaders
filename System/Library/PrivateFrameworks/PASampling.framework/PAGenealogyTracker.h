/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PASampling/PASampling-Structs.h>
#import <PASampling/PASerializable.h>

@class NSMutableDictionary, NSString;

@interface PAGenealogyTracker : NSObject <PASerializable> {

	NSMutableDictionary* _messages;
	NSMutableDictionary* _breadcrumbs;
	NSMutableDictionary* _activityNames;
	os_activity_stream_sRef _messageStream;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
-(id)init;
-(void)dealloc;
-(void)stopTracking;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(id)breadcrumbsForProcess:(int)arg1 betweenMachStartTime:(double)arg2 andEndTime:(double)arg3 ;
-(id)activityNameForId:(unsigned long long)arg1 ;
-(id)messagesForThread:(unsigned long long)arg1 betweenMachStartTime:(double)arg2 andEndTime:(double)arg3 ;
-(void)trackPid:(int)arg1 withFlags:(unsigned long long)arg2 ;
-(void)_parseStreamEntry:(os_activity_stream_entry_s*)arg1 ;
-(void)_addBreadcrumb:(os_activity_breadcrumb_s*)arg1 forProcess:(id)arg2 withActivityId:(unsigned long long)arg3 ;
-(void)_addMessage:(os_trace_message_s*)arg1 withActivityId:(unsigned long long)arg2 ;
-(void)_addActivityName:(const char*)arg1 forId:(unsigned long long)arg2 ;
-(void)trackGloballyWithFlags:(unsigned long long)arg1 ;
@end

