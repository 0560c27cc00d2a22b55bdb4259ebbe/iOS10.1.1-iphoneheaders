/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDNumberParser.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMDH264Profile : HMDNumberParser <NSSecureCoding> {

	unsigned long long _h264Profile;

}

@property (nonatomic,readonly) unsigned long long h264Profile;              //@synthesize h264Profile=_h264Profile - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)arrayWithProfiles:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(unsigned long long)h264Profile;
-(id)initWithH264Profile:(unsigned long long)arg1 ;
-(id)initWithTLVData:(id)arg1 ;
@end

