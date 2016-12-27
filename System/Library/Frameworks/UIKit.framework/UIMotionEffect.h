/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class _UIMotionAnalyzerSettings, NSString;

@interface UIMotionEffect : NSObject <NSCopying, NSCoding> {

	_UIMotionAnalyzerSettings* _preferredMotionAnalyzerSettings;
	NSString* _animationIdentifier;

}
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)keyPathsAndRelativeValuesForViewerOffset:(UIOffset)arg1 ;
-(id)_preferredMotionAnalyzerSettings;
-(id)_keyPathsAndRelativeValuesForPose:(id)arg1 ;
-(id)_animationIdentifier;
-(void)_setPreferredMotionAnalyzerSettings:(id)arg1 ;
@end

