/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSDCAPropertyAnimationContextCache.h>

@interface TSDCABasicAnimationContextCache : TSDCAPropertyAnimationContextCache {

	BOOL _isObjectTypeCGColor;
	id _fromValue;
	id _toValue;

}

@property (nonatomic,readonly) id fromValue;                          //@synthesize fromValue=_fromValue - In the implementation block
@property (nonatomic,readonly) id toValue;                            //@synthesize toValue=_toValue - In the implementation block
@property (nonatomic,readonly) BOOL isObjectTypeCGColor;              //@synthesize isObjectTypeCGColor=_isObjectTypeCGColor - In the implementation block
-(id)initWithAnimation:(id)arg1 ;
-(void)verifyCacheWithAnimation:(id)arg1 ;
-(BOOL)isObjectTypeCGColor;
-(id)fromValue;
-(id)toValue;
@end

