/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/XMLWrapperDoc.h>

@class NSData, SAMLAttributeQueryElement, NSString;

@interface SAMLAttributeQuery : XMLWrapperDoc {

	NSData* _schemaData;
	SAMLAttributeQueryElement* _requestElement;

}

@property (nonatomic,retain) SAMLAttributeQueryElement * requestElement;              //@synthesize requestElement=_requestElement - In the implementation block
@property (nonatomic,readonly) NSString * channelId; 
-(void)addAttribute:(id)arg1 ;
-(NSString *)channelId;
-(void)setSubjectFromResponse:(id)arg1 ;
-(id)initWithData:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
-(id)initWithElement:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
-(SAMLAttributeQueryElement *)requestElement;
-(void)setRequestElement:(SAMLAttributeQueryElement *)arg1 ;
-(void)addAttribute:(id)arg1 values:(id)arg2 ;
@end

