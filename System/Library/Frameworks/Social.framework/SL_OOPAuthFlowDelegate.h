/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SL_OOPAuthFlowDelegate
@required
-(id)initialRedirectURL;
-(void)setAuthFlowCompletion:(/*^block*/id)arg1;
-(id)authURLForUsername:(id)arg1;
-(id)requestForAuthURL:(id)arg1;
-(BOOL)shouldHideWebViewForLoadWithRequest:(id)arg1;
-(void)webViewDidFinishLoadWithPageTitleSupplier:(/*^block*/id)arg1;

@end

