/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIGiftTableViewSection.h>

@class NSString, SKUIItem, SKUIGiftTableSectionHeaderView, NSDate;

@interface SKUIGiftSendDateSection : SKUIGiftTableViewSection {

	NSString* _dateString;
	SKUIItem* _giftItem;
	UIEdgeInsets _headerInsets;
	SKUIGiftTableSectionHeaderView* _headerView;
	NSDate* _sendDate;
	long long _sendDateStyle;

}

@property (nonatomic,retain) SKUIItem * giftItem;                    //@synthesize giftItem=_giftItem - In the implementation block
@property (assign,nonatomic) UIEdgeInsets headerInsets; 
@property (nonatomic,copy) NSDate * sendDate;                        //@synthesize sendDate=_sendDate - In the implementation block
@property (assign,nonatomic) long long sendDateStyle;                //@synthesize sendDateStyle=_sendDateStyle - In the implementation block
-(double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2 ;
-(long long)numberOfRowsInSection;
-(id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(id)_headerView;
-(void)updateCell:(id)arg1 forTransitionToSize:(CGSize)arg2 ;
-(void)setSendDate:(NSDate *)arg1 ;
-(void)setSendDateStyle:(long long)arg1 ;
-(id)headerViewForTableView:(id)arg1 ;
-(void)setGiftItem:(SKUIItem *)arg1 ;
-(void)setHeaderInsets:(UIEdgeInsets)arg1 ;
-(void)_createFormattedDateString:(BOOL)arg1 ;
-(UIEdgeInsets)headerInsets;
-(SKUIItem *)giftItem;
-(NSDate *)sendDate;
-(long long)sendDateStyle;
@end

