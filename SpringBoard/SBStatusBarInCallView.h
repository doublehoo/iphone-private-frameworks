/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBStatusBarDoubleHeightView.h"

@class NSTimer;

@interface SBStatusBarInCallView : SBStatusBarDoubleHeightView {
	double _inCallDuration;
	NSTimer* _durationTimer;
}
-(void)drawRect:(CGRect)rect;
@end
