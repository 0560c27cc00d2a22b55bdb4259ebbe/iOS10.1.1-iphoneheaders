/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/SAMLBaseElement.h>

@class SAMLDSAKeyValue, SAMLRSAKeyValue;

@interface SAMLSignatureKeyValue : SAMLBaseElement

@property (nonatomic,readonly) SAMLDSAKeyValue * dsaKeyValue; 
@property (nonatomic,readonly) SAMLRSAKeyValue * rsaKeyValue; 
+(id)createElement:(id*)arg1 ;
-(SAMLDSAKeyValue *)dsaKeyValue;
-(SAMLRSAKeyValue *)rsaKeyValue;
@end

