/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol ABStyleProvider;
@interface ABChameleonCell : UITableViewCell {

	int _abCellStyle;
	id<ABStyleProvider> _styleProvider;
	BOOL _hasConfiguredBackgroundViews;

}

@property (assign,nonatomic) int abCellStyle;                                //@synthesize abCellStyle=_abCellStyle - In the implementation block
@property (nonatomic,retain) id<ABStyleProvider> styleProvider;              //@synthesize styleProvider=_styleProvider - In the implementation block
-(void)dealloc;
-(void)setSectionLocation:(int)arg1 animated:(BOOL)arg2 ;
-(void)setAbCellStyle:(int)arg1 ;
-(int)abCellStyle;
-(void)_updateBackgroundViewsForCellStyleAndLocation;
-(void)_updateTextStylesForCellStyle;
-(id<ABStyleProvider>)styleProvider;
-(void)setStyleProvider:(id<ABStyleProvider>)arg1 ;
@end

