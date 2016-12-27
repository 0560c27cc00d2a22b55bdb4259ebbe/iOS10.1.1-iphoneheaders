/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface HMHAPMetadataCategory : NSObject <NSSecureCoding> {

	NSString* _uuidStr;
	NSString* _catDescription;

}

@property (nonatomic,retain) NSString * uuidStr;                     //@synthesize uuidStr=_uuidStr - In the implementation block
@property (nonatomic,retain) NSString * catDescription;              //@synthesize catDescription=_catDescription - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)uuidStr;
-(NSString *)catDescription;
-(void)setUuidStr:(NSString *)arg1 ;
-(void)setCatDescription:(NSString *)arg1 ;
@end

