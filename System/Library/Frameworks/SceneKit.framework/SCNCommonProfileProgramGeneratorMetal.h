/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:41 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNCommonProfileProgramGenerator.h>

@class NSString, NSArray;

@interface SCNCommonProfileProgramGeneratorMetal : SCNCommonProfileProgramGenerator {

	NSString* _originalSourceCode;
	NSArray* _injectionPointRanges;

}
-(id)init;
-(void)dealloc;
-(C3DFXProgramRef)_programWithHashCode:(C3DRendererElementProgramHashCodeRef)arg1 introspectionDataPtr:(void*)arg2 ;
-(int)profile;
@end

