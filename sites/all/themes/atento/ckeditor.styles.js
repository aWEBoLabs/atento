/*
Copyright (c) 2003-2013, CKSource - Frederico Knabben. All rights reserved.
For licensing, see LICENSE.html or http://ckeditor.com/license
*/

/*
 * This file is used/requested by the 'Styles' button.
 * The 'Styles' button is not enabled by default in DrupalFull and DrupalFiltered toolbars.
 */
if(typeof(CKEDITOR) !== 'undefined') {
  CKEDITOR.addStylesSet( 'drupal',
  [
    {
      name: 'Square Container', 
      element: 'div',
      attributes: {
        class: 'color-container'
      }
    }, 
    {
      name: 'Square Container (Dark Blue)', 
      element: 'div',
      attributes: {
        class: 'color-container dark-blue'
      }
    }, 
    {
      name: 'Square Container (Blue)', 
      element: 'div',
      attributes: {
        class: 'color-container blue'
      }
    }, 
    {
      name: 'Square Container (Orange)', 
      element: 'div',
      attributes: {
        class: 'color-container orange'
      }
    }, 
    {
      name: 'Square Container (Dark Orange)', 
      element: 'div',
      attributes: {
        class: 'color-container dark-orange'
      }
    }, 
    {
      name: 'Square Container (Green)', 
      element: 'div',
      attributes: {
        class: 'color-container green'
      }
    }, 

    {
      name: 'Featured Container', 
      element: 'div',
      attributes: {
        class: 'featured-container'
      }
    }, 
    {
      name: 'Featured Container (Dark Blue)', 
      element: 'div',
      attributes: {
        class: 'featured-container dark-blue'
      }
    }, 
    {
      name: 'Featured Container (Blue)', 
      element: 'div',
      attributes: {
        class: 'featured-container blue'
      }
    }, 
    {
      name: 'Featured Container (Orange)', 
      element: 'div',
      attributes: {
        class: 'featured-container orange'
      }
    }, 
    {
      name: 'Featured Container (Dark Orange)', 
      element: 'div',
      attributes: {
        class: 'featured-container dark-orange'
      }
    }, 
    {
      name: 'Featured Container (Green)', 
      element: 'div',
      attributes: {
        class: 'featured-container green'
      }
    }, 
    {
      name: 'Two Columns (748px width, Image Left and Description Right)', 
      element: 'div',
      attributes: {
        class: 'two-columns-image-left'
      }
    }, 
    {
      name: 'Two Columns (748px width, Description Left and Image Right)', 
      element: 'div',
      attributes: {
        class: 'two-columns-image-right'
      }
    }, 
    {
      name: 'One Column (264px width)', 
      element: 'div',
      attributes: {
        class: 'one-column'
      }
    }, 
    {
      name: 'One Column (220px width)', 
      element: 'div',
      attributes: {
        class: 'one-column width-220'
      }
    },  
    {
      name: 'One Column (194px width)', 
      element: 'div',
      attributes: {
        class: 'one-column width-194'
      }
    },  
    {
      name: 'One Column (168px width)', 
      element: 'div',
      attributes: {
        class: 'one-column width-168'
      }
    },  
  ]);
}