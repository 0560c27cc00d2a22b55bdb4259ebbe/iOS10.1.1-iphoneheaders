/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/UIPlugins/Phone.siriUIBundle/Phone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Phone/Phone-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class UIImageView, SiriUIContentLabel, UIDateLabel, SiriPhoneCall;

@interface SiriPhoneCollectionViewCell : SiriUIContentCollectionViewCell {

	UIImageView* _statusImageView;
	SiriUIContentLabel* _contactLabel;
	SiriUIContentLabel* _callCountLabel;
	SiriUIContentLabel* _labelLabel;
	SiriUIContentLabel* _durationLabel;
	UIDateLabel* _dateLabel;
	SiriPhoneCall* _call;

}

@property (nonatomic,retain) SiriPhoneCall * call;              //@synthesize call=_call - In the implementation block
+(double)defaultHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(SiriPhoneCall *)call;
-(void)setCall:(SiriPhoneCall *)arg1 ;
@end

