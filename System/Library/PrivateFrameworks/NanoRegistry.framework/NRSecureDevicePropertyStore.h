/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface NRSecureDevicePropertyStore : NSObject <NSSecureCoding, NSCopying> {

	NSMutableDictionary* _IDToProperty;
	NSMutableDictionary* _propertyToID;
	BOOL _dirty;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) BOOL dirty;                                    //@synthesize dirty=_dirty - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)enclosedClassTypes;
+(id)classTypes;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NR1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)description;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)dirty;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)securePropertyForID:(id)arg1 ;
-(id)storeSecureProperty:(id)arg1 ;
-(void)removeSecureProperty:(id)arg1 ;
-(id)allSecurePropertyIDs;
@end

