/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/DOMHTMLElement.h>

@class NSString, DOMHTMLFormElement, DOMValidityState, DOMNodeList;

@interface DOMHTMLKeygenElement : DOMHTMLElement

@property (assign) BOOL autofocus; 
@property (copy) NSString * challenge; 
@property (assign) BOOL disabled; 
@property (readonly) DOMHTMLFormElement * form; 
@property (copy) NSString * keytype; 
@property (copy) NSString * name; 
@property (copy,readonly) NSString * type; 
@property (readonly) BOOL willValidate; 
@property (readonly) DOMValidityState * validity; 
@property (copy,readonly) NSString * validationMessage; 
@property (readonly) DOMNodeList * labels; 
-(BOOL)autofocus;
-(void)setAutofocus:(BOOL)arg1 ;
-(BOOL)willValidate;
-(NSString *)validationMessage;
-(BOOL)checkValidity;
-(void)setCustomValidity:(id)arg1 ;
-(NSString *)keytype;
-(void)setKeytype:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)type;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(DOMHTMLFormElement *)form;
-(DOMNodeList *)labels;
-(NSString *)challenge;
-(void)setChallenge:(NSString *)arg1 ;
-(DOMValidityState *)validity;
@end

