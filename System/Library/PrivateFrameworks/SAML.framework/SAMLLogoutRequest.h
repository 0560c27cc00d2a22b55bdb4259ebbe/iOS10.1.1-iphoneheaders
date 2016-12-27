/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/XMLWrapperDoc.h>

@class NSData, SAMLLogoutRequestElement, NSString, NSDate;

@interface SAMLLogoutRequest : XMLWrapperDoc {

	NSData* _schemaData;
	SAMLLogoutRequestElement* _requestElement;

}

@property (nonatomic,retain) SAMLLogoutRequestElement * requestElement;              //@synthesize requestElement=_requestElement - In the implementation block
@property (nonatomic,retain) NSString * issuer; 
@property (nonatomic,retain) NSString * reason; 
@property (nonatomic,retain) NSDate * notOnOrAfter; 
-(NSString *)reason;
-(void)setReason:(NSString *)arg1 ;
-(void)setIssuer:(NSString *)arg1 ;
-(NSString *)issuer;
-(NSDate *)notOnOrAfter;
-(id)initWithData:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
-(id)initWithElement:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
-(SAMLLogoutRequestElement *)requestElement;
-(void)setRequestElement:(SAMLLogoutRequestElement *)arg1 ;
-(void)setNotOnOrAfter:(NSDate *)arg1 ;
@end

