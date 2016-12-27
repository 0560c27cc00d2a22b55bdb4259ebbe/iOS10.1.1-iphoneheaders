/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRC/CoreRC-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol CoreRCDeviceDelegate;
@class CoreRCManager, NSUUID;

@interface CoreRCDevice : NSObject <NSCopying, NSSecureCoding> {

	id<CoreRCDeviceDelegate> _delegate;
	CoreRCManager* _manager;
	unsigned long long _owningClients;
	BOOL _isLocalDevice;
	NSUUID* _uniqueID;
	NSUUID* _busUniqueID;

}

@property (nonatomic,copy) NSUUID * uniqueID;                     //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) NSUUID * busUniqueID;              //@synthesize busUniqueID=_busUniqueID - In the implementation block
@property (nonatomic,readonly) BOOL isLocalDevice;                //@synthesize isLocalDevice=_isLocalDevice - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)delegate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSUUID *)uniqueID;
-(void)setUniqueID:(NSUUID *)arg1 ;
-(BOOL)setExtendedProperty:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)extendedPropertyForKey:(id)arg1 error:(id*)arg2 ;
-(id)bus;
-(void)receivedHIDEvent:(id)arg1 fromDevice:(id)arg2 ;
-(id)initWithBus:(id)arg1 local:(BOOL)arg2 ;
-(BOOL)isLocalDevice;
-(id)mergeProperties;
-(NSUUID *)busUniqueID;
-(BOOL)sendHIDEvent:(id)arg1 target:(id)arg2 error:(id*)arg3 ;
-(void)readyToSend;
-(void)mergePropertiesFromDevice:(id)arg1 ;
-(BOOL)sendHIDEvent:(id)arg1 error:(id*)arg2 ;
-(BOOL)sendCommand:(unsigned long long)arg1 target:(id)arg2 withDuration:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)willAddToBus:(id)arg1 ;
-(void)didAddToBus:(id)arg1 ;
-(void)willRemoveFromBus:(id)arg1 ;
-(void)didRemoveFromBus:(id)arg1 ;
-(unsigned long long)removeOwningClient:(id)arg1 ;
-(unsigned long long)addOwningClient:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)manager;
-(void)setManager:(id)arg1 ;
@end

