/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/UIPlugins/Movies.siriUIBundle/Movies
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Movies/Movies-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, NSNumber;

@interface SiriMoviesRottenTomatoesRatingView : UIView {

	UIImageView* _tomatoImageView;
	UILabel* _percentageLabel;
	double _tomatoImageViewRightPadding;
	NSNumber* _tomatoRating;

}
-(BOOL)_isFresh;
-(id)initWithRating:(id)arg1 viewSize:(long long)arg2 showProviderName:(BOOL)arg3 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)baselineOffsetFromTopOfFrame;
@end

