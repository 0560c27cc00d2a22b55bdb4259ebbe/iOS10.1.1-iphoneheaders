/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebContentAnalysis/WebContentAnalysis-Structs.h>
@interface XMLNode : NSObject {

	xmlNode* _xmlNode;

}
+(id)stringValueForAttribute:(id)arg1 inNode:(xmlNode*)arg2 ;
+(id)getJavascriptFromNode:(xmlNode*)arg1 ;
-(void)dealloc;
-(id)initWithNode:(xmlNode*)arg1 ;
-(id)_stringValueFromAttribute:(id)arg1 ;
-(long long)_intValueFromAttribute:(id)arg1 ;
-(void)setXmlNode:(xmlNode*)arg1 ;
-(xmlNode*)xmlNode;
@end

