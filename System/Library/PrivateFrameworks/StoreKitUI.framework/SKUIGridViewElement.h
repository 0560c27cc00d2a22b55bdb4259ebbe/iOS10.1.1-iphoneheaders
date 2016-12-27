/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUICollectionDOMFeature;

@interface SKUIGridViewElement : SKUIViewElement {

	id _persistenceKey;
	BOOL _showsEditMode;

}

@property (nonatomic,readonly) BOOL allowsMultipleSelectionDuringEditing; 
@property (nonatomic,readonly) BOOL showsEditMode;                                        //@synthesize showsEditMode=_showsEditMode - In the implementation block
@property (nonatomic,readonly) SKUICollectionDOMFeature * collectionFeature; 
+(id)supportedFeatures;
-(BOOL)allowsMultipleSelectionDuringEditing;
-(void)enumerateChildrenUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)pageComponentType;
-(id)persistenceKey;
-(BOOL)showsEditMode;
-(SKUICollectionDOMFeature *)collectionFeature;
-(long long)_countOfInputCheckboxesWithBaseElement:(id)arg1 limit:(long long)arg2 ;
@end

