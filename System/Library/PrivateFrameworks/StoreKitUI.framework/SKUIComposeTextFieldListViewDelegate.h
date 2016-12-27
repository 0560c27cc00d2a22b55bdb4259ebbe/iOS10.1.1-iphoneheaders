/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKUIComposeTextFieldListViewDelegate <NSObject>
@optional
-(void)textFieldListValidityDidChange:(id)arg1;
-(void)textFieldListValuesDidChange:(id)arg1;

@required
-(long long)numberOfColumnsInTextFieldList:(id)arg1;
-(long long)numberOfFieldsInTextFieldList:(id)arg1;
-(id)textFieldList:(id)arg1 configurationForFieldAtIndex:(unsigned long long)arg2;

@end

