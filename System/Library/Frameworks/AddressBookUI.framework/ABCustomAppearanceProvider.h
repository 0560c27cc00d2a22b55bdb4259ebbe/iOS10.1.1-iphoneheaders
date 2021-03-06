/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ABStyleProvider;

@interface ABCustomAppearanceProvider : NSObject {

	ABStyleProvider* _styleProvider;

}
-(id)init;
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(BOOL)shouldUseCardContentProviderWhenAvailable;
-(void)setIndicatesFaceTimeHistory:(BOOL)arg1 onActionButton:(id)arg2 ;
-(BOOL)shouldPropagateStylesToPickers;
-(double)cardTableViewSectionHeaderHeightWhenEditing:(BOOL)arg1 ;
-(double)cardTableViewSectionFooterHeightWhenEditing:(BOOL)arg1 ;
-(id)newCardActionButton;
-(Class)customCardCellClass;
-(Class)customCardActionCellClass;
-(id)newCustomCardTableScrollingBackgroundView;
-(void)customSetEmphasized:(BOOL)arg1 onCell:(id)arg2 ;
-(BOOL)shouldPropagateStylesThroughUnknownPersonActions;
-(long long)unknownModalPresentationStyle;
-(id)newActionButton;
-(Class)propertyCellClass;
-(Class)actionCellClass;
-(id)newScrollingBackgroundView;
-(double)distanceBetweenSections;
-(void)setHighlighted:(BOOL)arg1 onPropertyCell:(id)arg2 ;
@end

