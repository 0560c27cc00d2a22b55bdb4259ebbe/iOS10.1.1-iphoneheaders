/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/SKUILayoutRequest.h>

@class NSAttributedString, NSString;

@interface SKUIAttributedStringLayoutRequest : NSObject <SKUILayoutRequest> {

	NSAttributedString* _attributedString;
	long long _numberOfLines;
	BOOL _wantsBaselineOffset;
	double _width;

}

@property (nonatomic,readonly) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (assign,nonatomic) long long numberOfLines;                              //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (assign,nonatomic) BOOL wantsBaselineOffset;                             //@synthesize wantsBaselineOffset=_wantsBaselineOffset - In the implementation block
@property (assign,nonatomic) double width;                                         //@synthesize width=_width - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) Class layoutClass; 
-(void)setNumberOfLines:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)width;
-(NSAttributedString *)attributedString;
-(id)initWithAttributedString:(id)arg1 ;
-(void)setWantsBaselineOffset:(BOOL)arg1 ;
-(long long)numberOfLines;
-(void)setWidth:(double)arg1 ;
-(Class)layoutClass;
-(BOOL)wantsBaselineOffset;
@end

