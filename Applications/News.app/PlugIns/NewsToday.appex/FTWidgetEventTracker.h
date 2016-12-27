/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/News.app/PlugIns/NewsToday.appex/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FTWidgetEventTracker <NSObject>
@required
-(void)widgetDidAppearWithHeadlineSource:(id)arg1 sourceConfigurationIdentifier:(id)arg2;
-(void)widgetDidFetchHeadlineResults:(id)arg1;
-(void)widgetPerformedUpdateWithHeadlineSource:(id)arg1 sourceConfigurationIdentifier:(id)arg2 updateFetchDuration:(double)arg3 updateResult:(unsigned long long)arg4 wifiReachable:(BOOL)arg5 cellularRadioAccessTechnology:(long long)arg6;
-(void)headlinesDidBecomeVisible:(id)arg1 withTriggerEvent:(unsigned long long)arg2;
-(void)userEngagedWithHeadline:(id)arg1 headlineSource:(id)arg2 sourceConfigurationIdentifier:(id)arg3 headlineSection:(id)arg4 otherVisibleHeadlineSection:(id)arg5 headlineOrder:(unsigned long long)arg6 widgetDisplayMode:(long long)arg7;
-(void)widgetWillAppear;
-(void)widgetWillDisappear;
-(void)widgetDidDisappear;
-(void)widgetActiveDisplayModeDidChange:(long long)arg1 withMaximumSize:(CGSize)arg2;

@end

