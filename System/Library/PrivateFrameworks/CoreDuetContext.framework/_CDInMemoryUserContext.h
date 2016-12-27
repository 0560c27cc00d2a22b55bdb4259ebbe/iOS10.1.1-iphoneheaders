/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_CDUserContext.h>
#import <libobjc.A.dylib/_CDContextInternal.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, _CDInMemoryContext, NSNumber;

@interface _CDInMemoryUserContext : NSObject <_CDUserContext, _CDContextInternal> {

	NSObject*<OS_dispatch_queue> _syncQueue;
	NSMutableDictionary* _contexts;
	_CDInMemoryContext* _userContext;
	NSNumber* _localDeviceID;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncQueue;              //@synthesize syncQueue=_syncQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * contexts;                      //@synthesize contexts=_contexts - In the implementation block
@property (nonatomic,retain) _CDInMemoryContext * userContext;                    //@synthesize userContext=_userContext - In the implementation block
@property (nonatomic,retain) NSNumber * localDeviceID;                            //@synthesize localDeviceID=_localDeviceID - In the implementation block
+(id)userContext;
+(id)sharedUserContext;
-(id)init;
-(id)description;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(BOOL)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)localContext;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(_CDInMemoryContext *)userContext;
-(void)setUserContext:(_CDInMemoryContext *)arg1 ;
-(NSNumber *)localDeviceID;
-(void)setLocalDeviceID:(NSNumber *)arg1 ;
-(void)registerCallback:(id)arg1 ;
-(void)deregisterCallback:(id)arg1 ;
-(NSMutableDictionary *)contexts;
-(void)setContexts:(NSMutableDictionary *)arg1 ;
-(id)setObject:(id)arg1 returningMetadataForContextualKeyPath:(id)arg2 ;
-(id)objectForContextualKeyPath:(id)arg1 ;
-(BOOL)setObject:(id)arg1 forContextualKeyPath:(id)arg2 ;
-(BOOL)hasKnowledgeOfContextualKeyPath:(id)arg1 ;
-(id)lastModifiedDateForContextualKeyPath:(id)arg1 ;
-(BOOL)evaluatePredicate:(id)arg1 ;
-(id)propertiesForContextualKeyPath:(id)arg1 ;
-(void)setContextValue:(id)arg1 forContextualKeyPath:(id)arg2 ;
-(id)contextForKeyPath:(id)arg1 ;
-(id)valuesForKeyPaths:(id)arg1 inContextsMatchingPredicate:(id)arg2 ;
@end

