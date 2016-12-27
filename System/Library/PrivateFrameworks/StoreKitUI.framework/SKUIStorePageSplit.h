/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, NSArray, SKUIStorePageSectionContext;

@interface SKUIStorePageSplit : NSObject <NSCopying> {

	UIColor* _dividerColor;
	long long _numberOfPageSections;
	NSArray* _pageComponents;
	SKUIStorePageSectionContext* _sectionContext;
	double _widthFraction;

}

@property (nonatomic,copy) UIColor * dividerColor;                                      //@synthesize dividerColor=_dividerColor - In the implementation block
@property (assign,nonatomic) long long numberOfPageSections;                            //@synthesize numberOfPageSections=_numberOfPageSections - In the implementation block
@property (nonatomic,copy) NSArray * pageComponents;                                    //@synthesize pageComponents=_pageComponents - In the implementation block
@property (nonatomic,retain) SKUIStorePageSectionContext * sectionContext;              //@synthesize sectionContext=_sectionContext - In the implementation block
@property (assign,nonatomic) double widthFraction;                                      //@synthesize widthFraction=_widthFraction - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)dividerColor;
-(void)setDividerColor:(UIColor *)arg1 ;
-(void)setPageComponents:(NSArray *)arg1 ;
-(NSArray *)pageComponents;
-(SKUIStorePageSectionContext *)sectionContext;
-(void)setSectionContext:(SKUIStorePageSectionContext *)arg1 ;
-(void)setNumberOfPageSections:(long long)arg1 ;
-(long long)numberOfPageSections;
-(void)setWidthFraction:(double)arg1 ;
-(double)widthFraction;
@end

