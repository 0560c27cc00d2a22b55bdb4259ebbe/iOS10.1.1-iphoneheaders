/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SAML/SAML-Structs.h>
@interface XMLWrapperElementFactory : NSObject
+(id)sharedInstance;
+(void)initialize;
+(Class)elementClassByTagName:(id)arg1 ;
+(unsigned long long)elementTypeByTagName:(id)arg1 ;
+(void)registerClass:(Class)arg1 forElementName:(id)arg2 ;
-(Class)classForXMLNode:(xmlNode*)arg1 error:(id*)arg2 ;
@end

