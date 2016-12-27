/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/DOMObject.h>

@class NSString, DOMNode;

@interface DOMXPathResult : DOMObject

@property (readonly) unsigned short resultType; 
@property (readonly) double numberValue; 
@property (copy,readonly) NSString * stringValue; 
@property (readonly) BOOL booleanValue; 
@property (readonly) DOMNode * singleNodeValue; 
@property (readonly) BOOL invalidIteratorState; 
@property (readonly) unsigned snapshotLength; 
-(DOMNode *)singleNodeValue;
-(BOOL)invalidIteratorState;
-(unsigned)snapshotLength;
-(id)snapshotItem:(unsigned)arg1 ;
-(void)dealloc;
-(NSString *)stringValue;
-(unsigned short)resultType;
-(id)iterateNext;
-(double)numberValue;
-(BOOL)booleanValue;
@end

