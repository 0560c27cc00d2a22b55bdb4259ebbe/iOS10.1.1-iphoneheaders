/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/CarouselLayoutSettings.bundle/CarouselLayoutSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarouselLayoutSettings/CarouselLayoutSettings-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CSLHexAppNode : NSObject <NSCopying, NSSecureCoding> {

	NSString* _bundleIdentifier;
	Hex _hex;
	Hex _savedHex;

}

@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) Hex hex;                                //@synthesize hex=_hex - In the implementation block
@property (assign,nonatomic) Hex savedHex;                           //@synthesize savedHex=_savedHex - In the implementation block
+(id)fakeBundle;
+(BOOL)supportsSecureCoding;
-(void)setSavedHex:(Hex)arg1 ;
-(BOOL)moved;
-(void)setHex:(Hex)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 hex:(Hex)arg2 ;
-(Hex)savedHex;
-(void)commitHex;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)bundleIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(BOOL)valid;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(Hex)hex;
@end

