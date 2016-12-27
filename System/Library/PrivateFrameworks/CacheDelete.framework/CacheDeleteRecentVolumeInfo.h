/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CacheDelete/CacheDelete-Structs.h>
#import <CacheDelete/CacheDeleteRecent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSString, NSDate, NSNumber, NSMutableDictionary, NSObject;

@interface CacheDeleteRecentVolumeInfo : CacheDeleteRecent <NSSecureCoding, NSCopying> {

	NSString* _volume;
	NSDate* _timestamp;
	NSNumber* _freespace;
	NSMutableDictionary* _services;
	NSObject*<OS_dispatch_queue> _collection_queue;
	NSMutableDictionary* _diagnostics;

}

@property (nonatomic,retain) NSString * volume;                                          //@synthesize volume=_volume - In the implementation block
@property (retain) NSDate * timestamp;                                                   //@synthesize timestamp=_timestamp - In the implementation block
@property (retain) NSNumber * freespace;                                                 //@synthesize freespace=_freespace - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * services;                             //@synthesize services=_services - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> collection_queue;              //@synthesize collection_queue=_collection_queue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * diagnostics;                          //@synthesize diagnostics=_diagnostics - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)cacheDeleteRecentVolumeInfo:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSDate *)timestamp;
-(void)invalidate;
-(void)setTimestamp:(NSDate *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)volume;
-(void)setVolume:(NSString *)arg1 ;
-(void)log;
-(void)updateDiagnostics:(id)arg1 atUrgency:(int)arg2 ;
-(id)diagnosticsAtUrgency:(int)arg1 ;
-(id)initWithServices:(id)arg1 volumeName:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)collection_queue;
-(NSNumber *)freespace;
-(void)setFreespace:(NSNumber *)arg1 ;
-(void)updateDiagnostics:(id)arg1 forService:(id)arg2 atUrgency:(int)arg3 ;
-(id)diagnosticsForService:(id)arg1 atUrgency:(int)arg2 ;
-(BOOL)updateServiceInfoAmount:(id)arg1 forService:(id)arg2 atUrgency:(int)arg3 pushed:(BOOL)arg4 ;
-(id)recentInfoAtUrgency:(int)arg1 ;
-(id)lookupAmountForService:(id)arg1 atUrgency:(int)arg2 ;
-(void)removeServiceInfo:(id)arg1 ;
-(BOOL)validateServiceInfo:(id)arg1 atUrgency:(int)arg2 ;
-(id)copyInvalidsAtUrgency:(int)arg1 ;
-(void)setCollection_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)diagnostics;
-(BOOL)validate:(double)arg1 ;
-(NSMutableDictionary *)services;
-(void)setServices:(NSMutableDictionary *)arg1 ;
-(void)setDiagnostics:(NSMutableDictionary *)arg1 ;
@end

