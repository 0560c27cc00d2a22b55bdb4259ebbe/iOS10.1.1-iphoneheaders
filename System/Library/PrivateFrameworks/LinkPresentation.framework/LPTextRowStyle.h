/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class LPTextViewStyle;

@interface LPTextRowStyle : NSObject {

	LPTextViewStyle* _leading;
	LPTextViewStyle* _trailing;

}

@property (nonatomic,readonly) LPTextViewStyle * leading;               //@synthesize leading=_leading - In the implementation block
@property (nonatomic,readonly) LPTextViewStyle * trailing;              //@synthesize trailing=_trailing - In the implementation block
-(id)init;
-(LPTextViewStyle *)leading;
-(LPTextViewStyle *)trailing;
@end

