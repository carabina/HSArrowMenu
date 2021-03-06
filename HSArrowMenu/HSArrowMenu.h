//
//  HSArrowMenu.h
//  HSArrowMenu
//
//  Created by dengyouhua on 19/07/2017.
//  Copyright © 2017 cc | ccworld1000@gmail.com. All rights reserved.
//  [some adjust for new]https://github.com/ccworld1000/HSArrowMenu
//  [reference 1]https://github.com/kolyvan/kxmenu
//  [reference 2]https://github.com/zpz1237/NirKxMenu

#import <UIKit/UIKit.h>

typedef struct{
    CGFloat R;
    CGFloat G;
    CGFloat B;
    
}Color;

typedef struct {
    CGFloat arrowSize;
    CGFloat marginXSpacing;
    CGFloat marginYSpacing;
    CGFloat intervalSpacing;
    CGFloat menuCornerRadius;
    BOOL maskToBackground;
    BOOL shadowOfMenu;
    BOOL hasSeperatorLine;
    BOOL seperatorLineHasInsets;
    Color textColor;
    Color menuBackgroundColor;
    CGFloat customRightOffset; // Normal ignore
} HSArrowMenuConfig;

/**
 *  HSArrowMenuDirectionType
 */
typedef NS_ENUM(NSInteger, HSArrowMenuDirectionType) {
    /**
     *  None
     */
    HSArrowMenuDirectionTypeNone,
    /**
     *  Up
     */
    HSArrowMenuDirectionTypeUp,
    /**
     *  Down
     */
    HSArrowMenuDirectionTypeDown,
    /**
     *  Left
     */
    HSArrowMenuDirectionTypeLeft,
    /**
     *  Right
     */
    HSArrowMenuDirectionTypeRight,
    /**
     *  Custom
     */
    HSArrowMenuDirectionTypeCustom,
};

/**
 *  HSArrowMenuPriority
 */
typedef NS_ENUM(NSInteger, HSArrowMenuPriority) {
    /**
     *  Normal
     */
    HSArrowMenuPriorityNormal,
    /**
     *  Hight
     */
    HSArrowMenuPriorityHight,
};


@interface HSArrowMenu : UIView

@property (atomic, assign) HSArrowMenuConfig kxMenuViewOptions;
@property (nonatomic, assign) HSArrowMenuDirectionType arrowDirection;

- (void)dismissMenu:(BOOL) noAnimated;

- (void)showMenuInView:(UIView *)view
              fromRect:(CGRect)rect
             menuItems:(NSArray *)menuItems
           withOptions:(HSArrowMenuConfig) options;

@end
