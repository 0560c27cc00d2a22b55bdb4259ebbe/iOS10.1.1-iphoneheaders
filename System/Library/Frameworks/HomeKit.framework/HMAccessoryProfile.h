/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFPrettyDescription.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@class _HMAccessoryProfile, NSString, NSUUID, NSArray, HMAccessory;

@interface HMAccessoryProfile : NSObject <HFPrettyDescription, HMObjectMerge> {

	_HMAccessoryProfile* _accessoryProfile;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) _HMAccessoryProfile * accessoryProfile;              //@synthesize accessoryProfile=_accessoryProfile - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier; 
@property (nonatomic,readonly) NSArray * services; 
@property (nonatomic,__weak,readonly) HMAccessory * accessory; 
-(id)hf_prettyDescription;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSUUID *)uniqueIdentifier;
-(_HMAccessoryProfile *)accessoryProfile;
-(id)initWithAccessoryProfile:(id)arg1 ;
-(NSArray *)services;
-(HMAccessory *)accessory;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
@end

