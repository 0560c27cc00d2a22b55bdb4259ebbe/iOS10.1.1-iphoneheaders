/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/SKUIViewElementView.h>

@class UIImage, SKUIAttributedStringLayout, NSString;

@interface SKUIStarRatingViewElementView : UIView <SKUIViewElementView> {

	UIEdgeInsets _contentInset;
	long long _elementSpacing;
	UIImage* _starRatingImage;
	SKUIAttributedStringLayout* _textLayout;

}

@property (assign,nonatomic) long long elementSpacing;              //@synthesize elementSpacing=_elementSpacing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3 ;
+(id)textPropertiesForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(id)_attributedStringWithViewElement:(id)arg1 context:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)setElementSpacing:(long long)arg1 ;
-(long long)elementSpacing;
@end

