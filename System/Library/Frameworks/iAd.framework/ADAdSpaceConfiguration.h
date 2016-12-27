/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSSet;

@interface ADAdSpaceConfiguration : NSObject <NSSecureCoding> {

	int _creativeType;
	long long _options;
	NSString* _identifier;
	NSURL* _serverURL;
	NSString* _advertisingSection;
	NSString* _authenticationUserName;
	NSSet* _context;

}

@property (assign,nonatomic) int creativeType;                             //@synthesize creativeType=_creativeType - In the implementation block
@property (assign,nonatomic) long long options;                            //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSURL * serverURL;                              //@synthesize serverURL=_serverURL - In the implementation block
@property (nonatomic,copy) NSString * advertisingSection;                  //@synthesize advertisingSection=_advertisingSection - In the implementation block
@property (nonatomic,copy) NSString * authenticationUserName;              //@synthesize authenticationUserName=_authenticationUserName - In the implementation block
@property (nonatomic,copy) NSSet * context;                                //@synthesize context=_context - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSURL *)serverURL;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)identifier;
-(NSSet *)context;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)options;
-(void)setOptions:(long long)arg1 ;
-(void)setContext:(NSSet *)arg1 ;
-(void)setAdvertisingSection:(NSString *)arg1 ;
-(void)setAuthenticationUserName:(NSString *)arg1 ;
-(NSString *)advertisingSection;
-(NSString *)authenticationUserName;
-(int)creativeType;
-(void)setCreativeType:(int)arg1 ;
-(void)setServerURL:(NSURL *)arg1 ;
@end

