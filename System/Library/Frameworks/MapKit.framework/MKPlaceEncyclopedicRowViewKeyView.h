/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKPlaceSectionRowView.h>

@class NSLayoutConstraint, _MKUILabel;

@interface MKPlaceEncyclopedicRowViewKeyView : MKPlaceSectionRowView {

	NSLayoutConstraint* _baselineToTopConstraint;
	NSLayoutConstraint* _baselineToBottomConstraint;
	_MKUILabel* _keyLabel;

}

@property (nonatomic,retain) _MKUILabel * keyLabel;              //@synthesize keyLabel=_keyLabel - In the implementation block
-(void)_contentSizeDidChange;
-(id)initWithKeyLabel:(id)arg1 ;
-(void)setUpConstraints;
-(_MKUILabel *)keyLabel;
-(void)setKeyLabel:(_MKUILabel *)arg1 ;
@end

