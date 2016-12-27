/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSDictionary, NSURL;

@interface PKPaymentSetupProduct : NSObject <NSSecureCoding> {

	NSString* _displayName;
	unsigned long long _type;
	NSString* _region;
	NSString* _productIdentifier;
	NSArray* _requiredFields;
	NSArray* _supportedProtocols;
	NSDictionary* _readerModeMetadata;
	NSURL* _termsURL;
	NSArray* _associatedStoreIdentifiers;
	NSURL* _appLaunchURL;
	NSArray* _paymentOptions;
	NSDictionary* _rawDictionary;
	NSString* _identifier;

}

@property (nonatomic,copy) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * displayName;                            //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) unsigned long long type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * region;                                 //@synthesize region=_region - In the implementation block
@property (nonatomic,copy) NSString * productIdentifier;                      //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * requiredFields;                          //@synthesize requiredFields=_requiredFields - In the implementation block
@property (nonatomic,copy) NSArray * supportedProtocols;                      //@synthesize supportedProtocols=_supportedProtocols - In the implementation block
@property (nonatomic,copy) NSDictionary * readerModeMetadata;                 //@synthesize readerModeMetadata=_readerModeMetadata - In the implementation block
@property (nonatomic,copy) NSURL * termsURL;                                  //@synthesize termsURL=_termsURL - In the implementation block
@property (nonatomic,copy) NSArray * associatedStoreIdentifiers;              //@synthesize associatedStoreIdentifiers=_associatedStoreIdentifiers - In the implementation block
@property (nonatomic,copy) NSURL * appLaunchURL;                              //@synthesize appLaunchURL=_appLaunchURL - In the implementation block
@property (nonatomic,copy) NSDictionary * rawDictionary;                      //@synthesize rawDictionary=_rawDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSString * partnerName; 
@property (nonatomic,copy,readonly) NSArray * paymentOptions;                 //@synthesize paymentOptions=_paymentOptions - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)partnerProductsFromArrayOfPartners:(id)arg1 andProducts:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setRegion:(NSString *)arg1 ;
-(NSString *)region;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSDictionary *)readerModeMetadata;
-(void)setReaderModeMetadata:(NSDictionary *)arg1 ;
-(NSArray *)supportedProtocols;
-(id)initWithProductDictionary:(id)arg1 ;
-(void)setRequiredFields:(NSArray *)arg1 ;
-(void)setSupportedProtocols:(NSArray *)arg1 ;
-(void)setTermsURL:(NSURL *)arg1 ;
-(void)setAssociatedStoreIdentifiers:(NSArray *)arg1 ;
-(NSDictionary *)rawDictionary;
-(void)setRawDictionary:(NSDictionary *)arg1 ;
-(id)_initWithDisplayName:(id)arg1 partnerDictionary:(id)arg2 productIdentifier:(id)arg3 readerModeMetadata:(id)arg4 requiredFields:(id)arg5 paymentOptions:(id)arg6 termsURL:(id)arg7 ;
-(id)_initWithDisplayName:(id)arg1 partnerDictionary:(id)arg2 productIdentifier:(id)arg3 requiredFields:(id)arg4 ;
-(NSString *)productIdentifier;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(NSURL *)appLaunchURL;
-(NSArray *)requiredFields;
-(NSURL *)termsURL;
-(void)setAppLaunchURL:(NSURL *)arg1 ;
-(NSArray *)associatedStoreIdentifiers;
-(NSString *)partnerName;
-(long long)allSupportedProtocols;
-(NSArray *)paymentOptions;
@end

