/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@class NSArray;

@interface DMFFetchInstalledApplicationsRequest : CATTaskRequest {

	NSArray* _bundleIdentifiers;

}

@property (nonatomic,copy) NSArray * bundleIdentifiers;              //@synthesize bundleIdentifiers=_bundleIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)bundleIdentifiers;
-(void)setBundleIdentifiers:(NSArray *)arg1 ;
@end
